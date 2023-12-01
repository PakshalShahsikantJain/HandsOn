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
		*Head  = newn;
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
	for(Head != nil){
		fmt.Printf("|%d|->",Head.data);
		Head = Head.next;
	}
}

func Count(Head PNODE) int {
	var icnt int = 0;
	for(Head != nil){
		icnt++;
		Head = Head.next;
	}

	return icnt;
}

func MaxElement(Head PNODE) int {
	var iMax int = 0;

	iMax = Head.data;
	for(Head != nil){
		if(Head.data > iMax) {
			iMax = Head.data;
		}
		Head = Head.next;
	}

	return iMax;
}

func main() {
	var First PNODE = nil;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");
	InsertFirst(&First,51);
	InsertFirst(&First,11);
	InsertFirst(&First,10);
	InsertLast(&First,105);
	InsertLast(&First,100);

	Display(First);
	iret = Count(First);
	fmt.Printf("\nCount of Elements From Linked list is : %d",iret);

	iret = MaxElement(First);
	fmt.Printf("\nMax Elements From Linked list is : %d",iret);

}