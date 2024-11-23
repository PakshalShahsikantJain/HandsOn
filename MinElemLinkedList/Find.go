package main;
import "fmt"

type Node struct {
	data int;
	next * Node;
}

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
	for(Head != nil) {
		fmt.Printf("|%d|->",Head.data);
		Head = Head.next;
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

func SmallestElem(Head PNODE) int {
	var Min int = 0;

	Min = Head.data;
	for(Head != nil) {
		if(Head.data < Min) {
			Min = Head.data;
		}
		Head = Head.next;
	}

	return Min;
}

func main() {
	var iret int = 0;

	var First PNODE = nil;

	fmt.Println("Jay Ganesh....");

	InsertFirst(&First,51);
	InsertFirst(&First,11);
	InsertFirst(&First,10);
	InsertLast(&First,2);
	InsertLast(&First,101);
	InsertLast(&First,120);

	fmt.Println("Elements of Linked list are : ");
	Display(First);

	iret = Count(First);
	fmt.Printf("\nCount of Elements From Linked List is : %d\n",iret);

	iret = SmallestElem(First);
	fmt.Printf("Smallest Element From Linked List is : %d\n",iret);	
}