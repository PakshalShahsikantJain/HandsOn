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
        icnt = 0;
        Head = self.Head;

        while(Head != None) :
            icnt = icnt + 1;
            Head = Head.next;

        return icnt;

    def DisplayPrime(self) :
        sum = 0;
        i = 0;
        Head = self.Head;

        while(Head != None) :
            for i in range(1,(Head.data // 2) + 1) :
                if((Head.data % i) == 0) :
                        sum = sum + i;
            
            if(sum == 1) :
                print(Head.data,end = "\t");
            sum = 0;
            Head = Head.next; 

def main() :
    iret = 0;

    print("Jay Ganesh...");

    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(14);
    sobj.InsertLast(41);
    sobj.InsertLast(999983);
    sobj.Display();

    iret = sobj.Count();
    print("Count of Elements From Linked List is : ",iret);

    sobj.DisplayPrime();

if __name__ == "__main__" :
    main();