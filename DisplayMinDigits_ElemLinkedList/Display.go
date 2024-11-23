package main;
import "fmt";

type Node struct {
	data int;
	next * Node;
};

type NODE = Node;
type PNODE = * Node;
type PPNODE = ** Node;

func InsertFirst(Head PPNODE,value int) {
	var newn PNODE = new(NODE);
	newn.data = value;
	newn.next = nil;

	if(*Head == nil) {
		*Head = newn;
	} else {
		newn.next = *Head;
		*Head = newn;
	}
}

func InsertLast(Head PPNODE,value int) {
	var newn PNODE = new(NODE);
	newn.data = value;
	newn.next = nil;
	var temp PNODE = *Head;

	if(*Head == nil) {
		*Head = newn;
	} else {
		for(temp.next != nil) {
			temp = temp.next;
		} 
		temp.next = newn;
	}
}

func Display(Head PNODE) {
	fmt.Print("Elements of linked List are : ");
	for(Head != nil) {
		fmt.Printf("|%d|->",Head.data);
		Head = Head.next;
	}
	fmt.Println();
}

func Count(Head PNODE) int {
	var icnt int = 0;

	for(Head != nil) {
		icnt++;
		Head = Head.next;
	}
	
	return icnt;
}

func DisplaySmall(Head PNODE) {
	var Digit int = 0;
	var No int = 0;
	var iMin int = 0;

	fmt.Println("Smallest Digits of All Elements of linked List are : ");
	for(Head != nil) {
		No = Head.data;

		iMin = No % 10;
		for(No != 0) {
			Digit = No % 10;
			if(Digit < iMin) {
				iMin = Digit;
			}
			No = No / 10;
		}	
		fmt.Printf("%d\t",iMin);
		iMin = 0;
		Head = Head.next;
	}
}

func main() {
	var iret int = 0;
	var First PNODE = nil;

	fmt.Println("Jay Ganesh....");
	
	InsertFirst(&First,51);
	InsertFirst(&First,11);
	InsertFirst(&First,10);
	InsertLast(&First,101);
	InsertLast(&First,23);
	InsertLast(&First,6);

	Display(First);
	
	iret = Count(First);
	fmt.Println("Count of Elements From Linked List is : ",iret);

	DisplaySmall(First);
}