package main
import "fmt"

type Node struct 
{
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
	fmt.Print("Elements of Linked List are : ");
	for(Head != nil) {
		fmt.Printf("|%d|->",Head.data);
		Head = Head.next;
	}
	fmt.Println();
}

func Count(Head PNODE) int {
	var icnt int  = 0;

	for(Head != nil) {
		icnt++;
		Head = Head.next;
	}

	return icnt;
}

func DisplayProduct(Head PNODE) {
	var Digit int = 0;
	var iNo int = 0;
	var imult int = 1;

	fmt.Println("Products of Digits of All Elememts of linked list are : ");
	for(Head != nil) {
		iNo = Head.data;
		for(iNo != 0) {
			Digit = iNo % 10;
			if(Digit == 0) {
				Digit = 1;
			}
			imult = imult * Digit;
			iNo = iNo / 10;
		}

		fmt.Printf("%d\t",imult);
		imult = 1;
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
	InsertLast(&First,121);
	InsertLast(&First,198);

	Display(First);

	iret = Count(First);
	fmt.Println("Count of Elements From Linked List is : ",iret);

	DisplayProduct(First);
}