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

        if(temp == None) :
            temp = newn;
        else :
            while(temp.next != None) :
                temp = temp.next;
            temp.next = newn;
    
    def Display(self) :
        temp = self.Head;

        while(temp != None) :
            print("|%d|->"%temp.data,end = "");
            temp = temp.next;
    
    def Count(self) :
        temp = self.Head;
        icnt = 0;

        while(temp != None) :
            icnt = icnt + 1;
            temp = temp.next;

        return icnt;

    def SecondMax(self) : 
        tempMax = 0;
        iSecMax = 0;
        Head = self.Head;
        temp = self.Head;

        tempMax = temp.data;
        while(temp != None) :
            if(temp.data > tempMax) :
                tempMax = temp.data;
            temp = temp.next;

        iSecMax = Head.data;
        while(Head != None) :
            if((Head.data > iSecMax)and(Head.data < tempMax)) :
                iSecMax = Head.data;
            Head = Head.next;

        return iSecMax;

def main() :
    iret = 0;

    print("Jay Ganesh....");

    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(150);
    sobj.InsertLast(120);

    print("Elements of Linked List are : ");
    sobj.Display();

    iret = sobj.Count();
    print("\nCount of Elements From Linked List is :",iret);

    iret = sobj.SecondMax();
    print("Second Max Element From Linked List is :",iret);

if __name__ == "__main__" :
    main();