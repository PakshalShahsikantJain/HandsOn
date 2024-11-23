package main
import "fmt"

type Node struct {
	data int;
	next * Node;
}

type NODE = Node;
type PNODE = * Node;
type PPNODE = **Node;

func InsertFirst(Head PPNODE,Tail PPNODE,value int) {
	var newn PNODE = new(NODE);
	newn.data = value;
	newn.next = nil;

	if((*Head == nil)&&(*Tail == nil)) {
		*Head = newn;
		*Tail = newn;
	} else {
		newn.next = *Head;
		*Head = newn;
	}
	(*Tail).next = *Head;
}

func InsertLast(Head PPNODE ,Tail PPNODE,value int) {
	var newn PNODE = new(NODE);
	newn.data = value;
	newn.next = nil;

	if((*Head == nil)&&(*Tail == nil)) {
		*Head = newn;
		*Tail = newn;
	} else {
		(*Tail).next = newn;
		*Tail = newn;
	}
	(*Tail).next = *Head;
}

func InsertAtPos(Head PPNODE,Tail PPNODE,value int,ipos int) {
	var isize int = 0;
	var i int = 0;
	var newn PNODE = nil;
	var temp PNODE = *Head;

	isize = Count(*Head,*Tail);

	if((ipos < 1)||(ipos > (isize + 1))) {
		return;
	} else if(ipos == 1) {
		InsertFirst(Head,Tail,value);
	} else if(ipos == (isize + 1)) {
		InsertLast(Head,Tail,value);
	} else {
		newn = new(NODE);
		newn.data = value;
		newn.next = nil;

		for i = 1;i < (ipos - 1);i++ {
			temp = temp.next;
		}

		newn.next = temp.next;
		temp.next = newn;
	}
}

func DeleteFirst(Head PPNODE,Tail PPNODE) {
	if((*Head == nil)&&(*Tail == nil)) {
		return;
	} else if(*Head == *Tail) {
		*Head = nil;
		*Tail = nil;
	} else {
		(*Head) = (*Head).next;
		(*Tail).next = nil;
		(*Tail).next = *Head
	}
}

func DeleteLast(Head PPNODE,Tail PPNODE) {
	var temp PNODE = *Head;

	if((*Head == nil)&&(*Tail == nil)) {
		return;
	} else if(*Head == *Tail) {
		*Head = nil;
		*Tail = nil;
	} else {
		for(temp.next != *Tail) {
			temp = temp.next;
		}	

		*Tail = nil;
		*Tail = temp;
		(*Tail).next = *Head;
	}
}

func DeleteAtPos(Head PPNODE,Tail PPNODE,ipos int) {
	var isize int = 0;
	var i int = 0;
	var temp PNODE = *Head;
	var temp2 PNODE = nil;

	isize = Count(*Head,*Tail);

	if((ipos < 1)||(ipos > isize)) {
		return;
	} else if(ipos == 1) {
		DeleteFirst(Head,Tail);
	} else if(ipos == isize) {
		DeleteLast(Head,Tail);
	} else {
		for i = 1;i < (ipos - 1);i++ {
			temp = temp.next;
		}

		temp2 = temp.next;
		temp.next = temp2.next;
		temp2 = nil;
	}
}

func Display(Head PNODE,Tail PNODE) {
	if((Head == nil)&&(Tail == nil)) {
		return;
	} else {
		fmt.Println("Elements of Linked List are : ");
		for(Head != Tail) {
			fmt.Printf("|%d|<->",Head.data);
			Head = Head.next;
		}
		fmt.Printf("|%d|<->",Head.data);
		fmt.Println();
	}
}

func Count(Head PNODE,Tail PNODE) int {
	var icnt int = 0;

	if((Head == nil)&&(Tail == nil)) {
		return 0;
	} else {
		for(Head != Tail) {
			icnt++;
			Head = Head.next;
		}
		icnt++;

		return icnt;
	}
}

func main() {
	var First PNODE = nil;
	var Last PNODE = nil;
	var ino int = 0;
	var ipos int = 0;
	var iret int = 0;
	var ielem int = 0;

	fmt.Println("Jay Ganesh.....");

	fmt.Println("--------------------------Singly Circular Linked List Demonstration--------------------------");
	
	for(true) {
		fmt.Println("Select Any One Operation From Below List of Operations To Perform on Linked List : ");
		fmt.Println("1. Insert Element At First Position.");
		fmt.Println("2. Insert Element At Last Position.");
		fmt.Println("3. Insert Element At Entered Position.");
		fmt.Println("4. Display Elements of Linked List.");
		fmt.Println("5. Count No of Elements Present in Linked List.");
		fmt.Println("6. Delete Element From First Position");
		fmt.Println("7. Delete Element From Last Position.");
		fmt.Println("8. Delete Element From Entered Position.");
		fmt.Println("0. Exit.");

		fmt.Println("Enter Option Number : ");
		fmt.Scan(&ino);

		switch(ino) {
			case 1 : 
			{
				fmt.Println("Enter One Value : ");
				fmt.Scan(&ielem);

				InsertFirst(&First,&Last,ielem);
				break;
			}
			case 2 : 
			{
				fmt.Println("Enter One Value : ");
				fmt.Scan(&ielem);

				InsertLast(&First,&Last,ielem);
				break;				
			}
			case 3 : 
			{
				fmt.Println("Enter One Value : ");
				fmt.Scan(&ielem);
				
				fmt.Println("Enter Position Number to Insert Element At : ");
				fmt.Scan(&ipos);

				InsertAtPos(&First,&Last,ielem,ipos);

				break;
			}
			case 4 : 
			{
				Display(First,Last);

				break;
			}
			case 5 : 
			{
				iret = Count(First,Last);

				fmt.Printf("Count of Elements is : %d\n",iret);

				break;
			}
			case 6 : 
			{
				DeleteFirst(&First,&Last);

				break;
			}
			case 7 : 
			{
				DeleteLast(&First,&Last);

				break;
			}
			case 8 : 
			{
				fmt.Println("Enter Position Number to Delete Element From : ");
				fmt.Scan(&ipos);

				DeleteAtPos(&First,&Last,ipos)
				break;
			}
			case 0 : 
			{
				return;
			}
			default : 
			{
				fmt.Println("Invalid Option Number Entered, Please Enter Valid Option Number");
				return;
			}
		}
	}
}