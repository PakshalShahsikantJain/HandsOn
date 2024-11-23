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

func InsertAtPosition(Head PPNODE,ipos int,value int) {
	var isize int = 0;
	var i int = 0;
	var newn PNODE = nil;
	var temp PNODE = *Head;
	isize = Count(*Head);

	if((ipos < 1)||(ipos > isize + 1)) {
		return;
	} else if(ipos == 1) {
		InsertFirst(Head,value);
	} else if(ipos == (isize + 1)) {
		InsertLast(Head,value);
	} else {
		newn = new(NODE);
		newn.data = value;
		newn.next = nil;

		for i = 1; i < (ipos - 1);i++ {
			temp = temp.next;
		}

		newn.next = temp.next;
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

func DeleteFirst(Head PPNODE) {
	if(*Head != nil) {
		*Head = (*Head).next;
		return;
	}
}

func DeleteLast(Head PPNODE) {
	var temp PNODE = *Head;

	if(*Head == nil) {
		return;
	} else if((*Head).next == nil) {
		*Head = nil;
	} else {
		for(temp.next.next != nil) {
			temp = temp.next;
		}

		temp.next = nil;
	}
}

func DeleteAtPos(Head PPNODE,ipos int) {
	var isize int = 0;
	var i int = 0;
	isize = Count(*Head);
	var temp PNODE = *Head;
	var temp2 PNODE = nil;

	if((ipos < 1)||(ipos > isize )) {
		return;
	} else if(ipos == 1) {
		DeleteFirst(Head);
	} else if(ipos == isize) {
		DeleteLast(Head);
	} else {
		for i = 1;i < (ipos - 1);i++ {
			temp = temp.next;
		}
		temp2 = temp.next;
		temp.next = temp2.next;
		temp2.next = nil;
	}
}

func main() {
	var iret int = 0;
	var ino int = 0;
	var value int = 0;
	var ipos int = 0;
	var First PNODE = nil;

	fmt.Println("Jay Ganesh....");

	for(true) {
		fmt.Println("---------------------------Singly Linear Linked List Demonstration--------------------");
		fmt.Println("Select any operations option Number to Perform on Linked List");
		fmt.Println("1. Insert Element at First Position");
		fmt.Println("2. Insert Element at Last Position");
		fmt.Println("3. Insert Element at Desired Position you Want.");
		fmt.Println("4. Display Elements From Linked List.");
		fmt.Println("5. Count No of Elements Present in Linked List.");
		fmt.Println("6. Delete First Element From Linked List.");
		fmt.Println("7. Delete Last Element From Linked List.");
		fmt.Println("8. Delete Element From Entered Position.");
		fmt.Println("0. Exit");

		fmt.Println("Enter Option Number : ");
		fmt.Scan(&ino);

		switch(ino) {
			case 1 : 
				{
					fmt.Println("Enter Value of Element To Insert : ");
					fmt.Scan(&value);

					InsertFirst(&First,value);
					break;
				}
			case 2 :
				{
					fmt.Println("Enter Value of Element To Insert : ");
					fmt.Scan(&value);

					InsertLast(&First,value);
					break;
				} 
			case 3 :
				{
					fmt.Println("Enter Position Number You Want To Insert Element At : ");
					fmt.Scan(&ipos);

					fmt.Println("Enter Value of Element To Insert : ");
					fmt.Scan(&value);

					InsertAtPosition(&First,ipos,value);
					break;
				}
			case 4 :
				{
					Display(First);
					break;
				}
			case 5 : 
				{
					iret = Count(First);
					fmt.Printf("Count of Elements Present in Linked List is : %d\n",iret);
					break;
				}
			case 6 :
				{
					DeleteFirst(&First);
					break;
				}
			case 7 :
				{
					DeleteLast(&First);
					break;
				}
			case 8 :
				{
					fmt.Println("Enter Position Number You Want To Delete Element From : ");
					fmt.Scan(&ipos);
					
					DeleteAtPos(&First,ipos);
					break;
				}
			case 0 :
				{
					return;
				}
			default :
				{
					fmt.Println("Invalid Option Number Entered");
					return;
				}
		}
	}
}