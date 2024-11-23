package main;
import "fmt"

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

	fmt.Println("Elements of Linked List are : ");
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

func DisplayPerfect(Head PNODE) {
	var i int = 0;
	var sum int = 0;

	fmt.Println("Perfect Elements From Linked List are : ");
	for(Head != nil) {
		for i = 1;i <= (Head.data / 2);i++ {
			if((Head.data % i) == 0) {
				sum = sum + i;
			}
		}
		
		if(sum == Head.data) {
			fmt.Printf("%d\t",Head.data);
		}
		sum = 0;
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
	InsertLast(&First,41);
	InsertLast(&First,17);
	InsertLast(&First,6);
	InsertLast(&First,33550336);
	InsertLast(&First,28);

	Display(First);
	iret = Count(First);

	fmt.Println("Count of Elements From Linked List is : ",iret);

	DisplayPerfect(First);
}



