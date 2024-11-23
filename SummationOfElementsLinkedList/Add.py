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
            print("|%d|->"%temp.data,end="");
            temp = temp.next;      

    def Count(self) :
        icnt = 0;
        temp = self.Head;

        while(temp != None) :
            icnt = icnt + 1;
            temp = temp.next;      

        return icnt;
    
    def Summation(self) :
        sum = 0;
        temp = self.Head;

        while(temp != None) :
            sum = sum + temp.data;
            temp = temp.next;
        
        return sum;
        
def main() :
    iret = 0;

    print("Jay Ganesh....");

    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(201);
    sobj.InsertLast(301);
    sobj.Display();

    iret = sobj.Count();
    print("\nCount of Elements From Linked List is : %d"%iret);

    iret = sobj.Summation();
    print("Addition of Elements From Linked List is : %d"%iret);

if __name__ == "__main__" :
    main();