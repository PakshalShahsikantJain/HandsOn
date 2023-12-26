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
        Head = self.Head;
        
        print("Elements of Linked List are : ");
        while(Head != None) :
            print("|%d|->"%Head.data,end = "");
            Head = Head.next;
        print();
    
    def Count(self) :
        Head = self.Head;
        icnt = 0;

        while(Head != None) :
            icnt = icnt + 1;
            Head = Head.next;
        
        return icnt;

    def DisplayPerfect(self) :
        Head = self.Head;
        i = 0;
        sum = 0;

        print("Perfect Elements From Linked List are : ");
        while(Head != None) :
            for i in range(1,(Head.data // 2) + 1) :
                if((Head.data % i) == 0) :
                    sum = sum + i;
            
            if(sum == Head.data) :
                print(Head.data,end = "\t");
            
            sum = 0;
            Head = Head.next;


def main() :
    print("Jay Ganesh....");

    iret = 0;

    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(33550336);
    sobj.InsertLast(17);
    sobj.InsertLast(41);
    sobj.InsertFirst(28);
    sobj.InsertFirst(6);

    sobj.Display();

    iret = sobj.Count();
    print("Count of Elements from Linked List is : ",iret);

    sobj.DisplayPerfect();

if __name__ == "__main__" :
    main();