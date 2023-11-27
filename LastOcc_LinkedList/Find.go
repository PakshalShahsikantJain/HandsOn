package main
import "fmt"

type Node struct {
	data int;
	next * Node;
}

type NODE = Node;
type PNODE = * Node;
type PPNODE = ** Node;

func InsertFirst(Head PPNODE,value int) {
	var newn = new(NODE);
	newn.data = value;
	newn.next = nil;


	if *Head == nil {
		*Head = newn;
	} else {
		newn.next = *Head;
		*Head = newn;
	}
}

func InsertLast(Head PPNODE,value int) {
	var newn = new(NODE);
	var temp = *Head;
	newn.data = value;
	newn.next = nil;

	if(temp == nil) {
		temp = newn;
	} else {
		for(temp.next != nil) {
			temp = temp.next;
		}
		temp.next = newn;
	}
}

func Count(Head PNODE) int {
	var icnt int = 0;

	for(Head != nil) {
		icnt++;
		Head = Head.next;
	}

	return icnt;
}

func LastOcc(Head PNODE,value int) int {
	var icnt = 1;
	var ipos = 0;

	for(Head != nil) {
		if(Head.data == value) {
			ipos = icnt;
		} 
		icnt++;
		Head = Head.next;
	}

	return ipos;
}

func Display(Head PNODE) {

	for Head != nil {
		fmt.Printf("|%d|->",Head.data);
		Head = Head.next;
	}
}

func main() {
	var First PNODE = nil;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	InsertFirst(&First,51);
	InsertFirst(&First,11);
	InsertFirst(&First,10);
	InsertFirst(&First,5);
	InsertLast(&First,101);
	InsertLast(&First,11);
	InsertLast(&First,201);
	
	Display(First);

	iret = Count(First);
	fmt.Printf("\nCount of Elements from Linked List is : %d",iret);

	iret = LastOcc(First,11);
	fmt.Printf("\nLast Occurance of Element is at Position Number : %d",iret);
}