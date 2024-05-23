"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Node
        :rtype: List[List[int]]
        """
        q = []
        q.append(root)
        currentLevel, returnArray = [], []
        while len(q) > 0: 
            for i in range(len(q)):
                currentNode = q[0]
                if currentNode != None:
                    currentLevel.append(currentNode.val)
                    for child in currentNode.children:
                        q.append(child)
                q.pop(0)
            if currentLevel != []:
                returnArray.append(currentLevel)
            currentLevel = []
        return returnArray