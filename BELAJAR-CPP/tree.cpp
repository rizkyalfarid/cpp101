#include <iostream>
#include <memory>
using namespace std;

struct Node
{
  int data;
  shared_ptr<Node> left;
  shared_ptr<Node> right;
  Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
public:
  shared_ptr<Node> root;
  BinaryTree() : root(nullptr) {}
  void add(int value)
  {
    root = addRecursive(root, value);
  }

  bool search(int value)
  {
    return searchRecursive(root, value);
  }

  void inOrder()
  {
    inOrderRecursive(root);
    cout << endl;
  }

  void preOrder()
  {
    preOrderRecursive(root);
    cout << endl;
  }

  void postOrder()
  {
    postOrderRecursive(root);
    cout << endl;
  }

private:
  shared_ptr<Node> addRecursive(shared_ptr<Node> node, int value)
  {
    if (!node)
    {
      return make_shared<Node>(value);
    }

    if (value < node->data)
    {
      node->left = addRecursive(node->left, value);
    }
    else
    {
      node->right = addRecursive(node->right, value);
    }

    return node;
  }

  bool searchRecursive(shared_ptr<Node> node, int value)
  {
    if (!node)
    {
      return false;
    }

    if (node->data == value)
    {
      return true;
    }
    else if (value < node->data)
    {
      return searchRecursive(node->left, value);
    }
    else
    {
      return searchRecursive(node->right, value);
    }
  }

  void inOrderRecursive(shared_ptr<Node> node)
  {
    if (node)
    {
      inOrderRecursive(node->left);
      cout << node->data << " ";
      inOrderRecursive(node->right);
    }
  }

  void preOrderRecursive(shared_ptr<Node> node)
  {
    if (node)
    {
      cout << node->data << " ";
      preOrderRecursive(node->left);
      preOrderRecursive(node->right);
    }
  }

  void postOrderRecursive(shared_ptr<Node> node)
  {
    if (node)
    {
      postOrderRecursive(node->left);
      postOrderRecursive(node->right);
      cout << node->data << " ";
    }
  }
};

int main()
{
  BinaryTree tree;
  int choice, value;

  do
  {
    cout << "1. Tambah node\n";
    cout << "2. Cari node\n";
    cout << "3. Traversal in-order\n";
    cout << "4. Traversal pre-order\n";
    cout << "5. Traversal post-order\n";
    cout << "6. Keluar\n";
    cout << "Pilih opsi: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Masukkan nilai: ";
      cin >> value;
      tree.add(value);
      break;
    case 2:
      cout << "Masukkan nilai yang dicari: ";
      cin >> value;
      if (tree.search(value))
      {
        cout << "Node ditemukan.\n";
      }
      else
      {
        cout << "Node tidak ditemukan.\n";
      }
      break;
    case 3:
      cout << "Traversal in-order: ";
      tree.inOrder();
      break;
    case 4:
      cout << "Traversal pre-order: ";
      tree.preOrder();
      break;
    case 5:
      cout << "Traversal post-order: ";
      tree.postOrder();
      break;
    case 6:
      cout << "Keluar.\n";
      break;
    default:
      cout << "Pilihan tidak valid.\n";
      break;
    }
    cout << endl;
  } while (choice != 6);

  return 0;
}
