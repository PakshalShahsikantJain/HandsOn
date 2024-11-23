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
	var temp PNODE = *Head;

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

func Addition(Head PNODE) int {
	var isum int = 0;

	for(Head != nil) {
		isum = isum + Head.data;
		Head = Head.next;
	}

	return isum;
}	

func main() {
	var First PNODE = nil;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	InsertFirst(&First,51);
	InsertFirst(&First,11);
	InsertFirst(&First,10);
	InsertLast(&First,201);
	InsertLast(&First,301);
	Display(First);

	iret = Count(First);
	fmt.Printf("\nCount of Elements From Linked List is : %d",iret);

	iret = Addition(First);
	fmt.Printf("\nAddition of Elements From Linked List is : %d",iret);

}