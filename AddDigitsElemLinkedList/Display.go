package main
import "fmt"
//import "math"

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
	fmt.Println("Elements of Linked list are : ");
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

func SumDigit(Head PNODE) {
	var isum int = 0;
	var Digit int = 0;
	var No int = 0;

	fmt.Println("Addition of Digits Of All Elements is as follows: ");
	for(Head != nil) {
		No = Head.data;

		for(No != 0) {
			Digit = No % 10;
			isum = isum + Digit;
			No = No / 10;
		}

		fmt.Printf("%d\t",isum);

		isum = 0;
		Head = Head.next;
	}
}

func main() {
	var First PNODE = nil;
	var iret = 0;

	fmt.Println("Jay Ganesh...");

	InsertFirst(&First,51);
	InsertFirst(&First,11);
	InsertFirst(&First,10);
	InsertLast(&First,101);
	InsertLast(&First,120);
	InsertLast(&First,112);

	Display(First);
	
	iret = Count(First);	
	fmt.Println("Count of Elements From Linked List is : ",iret);

	SumDigit(First);	
}
