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

func SecondMax(Head PNODE) int {
	var tempMax int = 0;
	var iSecMax int = 0;
	var temp PNODE = Head;

	tempMax = temp.data;
	for(temp != nil) {
		if(temp.data > tempMax) {
			tempMax = temp.data;
		}
		temp = temp.next;
	}

	iSecMax = Head.data;
	for(Head != nil) {
		if((Head.data > iSecMax)&&(Head.data < tempMax)) {
			iSecMax = Head.data;
		}
		Head = Head.next;
	}

	return iSecMax;
}
func main() {
	var First PNODE = nil;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");
	InsertFirst(&First,51);
	InsertFirst(&First,11);
	InsertFirst(&First,10);
	InsertLast(&First,101);
	InsertLast(&First,150);
	InsertLast(&First,120);

	fmt.Print("Elements of Linked List are : ");
	Display(First);

	iret = Count(First);
	fmt.Println("\nCount of Elements From Linked List is :",iret);

	iret = SecondMax(First);
	fmt.Println("Second Max Element From Linked List is :",iret);
}

