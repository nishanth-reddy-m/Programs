class TreeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
    def add_child(self,data):
        if data == self.data:
            return
        if data < self.data:
            if self.left:
                self.left.add_child(data)
            else:
                self.left = TreeNode(data)
        else:
            if self.right:
                self.right.add_child(data)
            else:
                self.right = TreeNode(data)
    def search(self,data):
        if data == self.data:
            return True
        if data < self.data:
            if self.left:
                return self.left.search(data)
            else:
                return False
        else:
            if self.right:
                return self.right.search(data)
            else:
                return False
    def delete(self,data):
        if data < self.data:
            if self.left:
                self.left = self.left.delete(data)
        elif data > self.data:
            if self.right:
                self.right = self.right.delete(data)
        else:
            if self.left:
                maxi = self.left.max()
                self.data = maxi
                self.left = self.left.delete(maxi)
            elif self.right:
                mini = self.right.min()
                self.data = mini
                self.right = self.right.delete(mini)
            else:
                return None
        return self
    def min(self):
        if self.left:
            return self.left.min()
        return self.data
    def max(self):
        if self.right:
            return self.right.max()
        return self.data
    def sum(self):
        return sum(self.inorder())
    def inorder(self):
        elements = []
        if self.left:
            elements += self.left.inorder()
        elements.append(self.data)
        if self.right:
            elements += self.right.inorder()
        return elements
    def preorder(self):
        elements = []
        elements.append(self.data)
        if self.left:
            elements += self.left.preorder()
        if self.right:
            elements += self.right.preorder()
        return elements
    def postorder(self):
        elements = []
        if self.left:
            elements += self.left.postorder()
        if self.right:
            elements += self.right.postorder()
        elements.append(self.data)
        return elements
        
def build_tree(elements):
    tree = TreeNode(elements[0])
    for i in range(1,len(elements)):
        tree.add_child(elements[i])
    return tree

if __name__ == '__main__':
    List = [15,12,27,7,14,20,88,23]
    Countries = ['India','Pakistan','Germany','USA','China','India','UK','USA']
    numbers = build_tree(List)
    tree = build_tree(Countries)
    print(tree.search('UK'),numbers.search(10))
    print(tree.search('Swedan'),numbers.search(20))
    print()
    print('Inorder Traversal:',tree.inorder(),numbers.inorder())
    print('Preorder Traversal:',tree.preorder(),numbers.preorder())
    print('Postorder Traversal:',tree.postorder(),numbers.postorder())
    print()
    print(numbers.min(),numbers.max(),numbers.sum())
    def traverse(tree):
        print()
        print(tree.inorder())
        print(tree.preorder())
        print(tree.postorder())
    from time import sleep
    def bulk_delete(tree):
        while tree.inorder():
            tree = tree.delete(tree.max())
            print(tree.inorder())
            sleep(1)
    mix = build_tree(list(map(str,List))+Countries)
    bulk_delete(mix)