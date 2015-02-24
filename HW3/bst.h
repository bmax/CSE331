/**
 *  * An implementation of a binary search tree 
 *  * Brandon Max - maxbrand
 *  * A49257553
 *  */
using namespace std;
struct Node
{
  Node *left;
  Node *right;
  int value;
  Node(int v) : left(nullptr), right(nullptr), value(v) {}
};
class BST
{
  public:
    BST() : root(nullptr) {}
    ~BST();

    // You need to implement these
    bool Add(int elem);
    bool Insert(Node* currentNode, int elem);
    void printInorder(Node* currentNode);                  
    void printPreorder(Node* currentNode);                  
    void printPostorder(Node* currentNode);                  
    Node* getRoot() { return root; }
    //                   // Supplied Methods
    bool IsEmpty() const { return Size() == 0; }
    int Size() const { return size; }
  private:
    int size;
    Node* root; 
};
void BST::printInorder(Node* currentNode)
{
  if (currentNode == nullptr) return;
  printInorder(currentNode->left);
  cout << currentNode->value <<" ";
  printInorder(currentNode->right);
}
void BST::printPreorder(Node* currentNode)
{
  if (currentNode == nullptr) return;
  cout << currentNode->value <<" ";
  printPreorder(currentNode->left);
  printPreorder(currentNode->right);
}
void BST::printPostorder(Node* currentNode)
{
  if (currentNode == nullptr) return;
  printPostorder(currentNode->left);
  printPostorder(currentNode->right);
  cout << currentNode->value <<" ";
}
bool BST::Add(int elem) {
  if (root == nullptr)
  {
    root = new Node(elem);
    size++;
    return true;
  }
  return Insert(root, elem);
}
/**
 *  * Inserts the element into the tree
 *   * Returns true if the insertion was successful
 *    * Returns false if the element already existed.
 *     */
bool BST::Insert(Node* currentNode, int elem) {
  if (elem < currentNode->value)
  {
    if (currentNode->left == nullptr) 
    {
      currentNode->left = new Node(elem); 
      size++;
      return true;
    } else {
      Insert(currentNode->left, elem);
      return true;
    }
  }
  if (elem > currentNode->value)
  {
    if (currentNode->right == nullptr) 
    {
      currentNode->right = new Node(elem); 
      size++;
      return true;
    } else {
      Insert(currentNode->right, elem);
      return true;
    }
  }

  return false;
};
