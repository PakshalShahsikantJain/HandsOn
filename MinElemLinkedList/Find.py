class Node :
    data = 0;
    next = None;

    def __init__(self) : 
        self.data = 0;
        self.next = None;
    
class SinglyLL :
    Head = None;

    def __init__(self) : 
        self.Head = None;
    
    def InsertFirst(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;

        if(self.Head == None) :
            self.Head = newn;
        else : 
            newn.next = self.Head;
            self.Head = newn;
 
    def InsertLast(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;
        temp = self.Head;

        if(self.Head == None) :
            self.Head = newn;
        else : 
            while(temp.next != None) :
                temp = temp.next;
            temp.next = newn;

    def Display(self) : 
        temp = self.Head;

        while(temp != None) :
            print("|%d|->"%temp.data,end="");
            temp = temp.next;
    
    def Count(self) :
        icnt = 0;
        temp = self.Head;
    
        while(temp != None) :
            icnt = icnt + 1;
            temp = temp.next;

        return icnt;

    def SmallElem(self) :
        Min = 0;
        temp = self.Head;

        Min = temp.data;
        while(temp != None) :
            if(temp.data < Min) :
                Min = temp.data;
            temp = temp.next;

        return Min;

def main() :
    print("Jay ganesh...");
    iret = 0;

    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(2);
    sobj.InsertLast(101);
    sobj.InsertLast(105);

    print("Element From Linked List are : ");
    sobj.Display();

    iret = sobj.Count();
    print("\nCount of Elements From Linked List is :",iret);

    iret = sobj.SmallElem();
    print("Smallest Element From Linked List is :",iret);

if __name__ == "__main__" :
    main();