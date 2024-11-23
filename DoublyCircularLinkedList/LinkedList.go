package main
import "fmt"

type Node struct {
	data int;
	next * Node;
	prev * Node;
};

type NODE = Node;
type PNODE = * Node;
type PPNODE = ** Node;

func InsertFirst(Head PPNODE,Tail PPNODE,value int) {
	var newn PNODE = new(NODE);
	newn.data = value;
	newn.next = nil;
	newn.prev = nil;

	if((*Head == nil)&&(*Tail == nil)) {
		*Head = newn;
		*Tail = newn;
	} else {
		newn.next = *Head;
		(*Head).prev = newn;
		*Head = newn;
	}
	(*Head).prev = *Tail;
	(*Tail).next = *Head;
}

func InsertLast(Head PPNODE,Tail PPNODE,value int) {
	var newn PNODE = new(NODE);
	newn.data = value;
	newn.next = nil;
	newn.prev = nil;

	if((*Head == nil)&&(*Tail == nil)) {
		*Head = newn;
		*Tail = newn;
	} else	{
		(*Tail).next = newn;
		newn.prev = *Tail;
		*Tail = newn;
	}
	(*Tail).next = *Head;
	(*Head).prev = *Tail;
}

func InsertAtPos(Head PPNODE,Tail PPNODE,value int,ipos int) {
	var newn PNODE = nil;
	var i int = 0;
	var isize int = 0;
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
		newn.prev = nil;

		for i = 1;i < (ipos - 1);i++ {
			temp = temp.next;
		}

		newn.next = temp.next;
		newn.prev = temp;
		(temp.next).prev = newn;
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
		(*Head).prev = nil;
		(*Head).prev = *Tail;
		(*Tail).next = *Head;
	}
}

func DeleteLast(Head PPNODE,Tail PPNODE) {
	if((*Head == nil)&&(*Tail == nil)) {
		return;
	} else if(*Head == *Tail) {
		*Head = nil;
		*Tail = nil;		
	} else {
		(*Tail) = (*Tail).prev;
		(*Tail).next = nil;
		(*Tail).next = *Head;
		(*Head).prev = *Tail;
	}
}

func DeleteAtPos(Head PPNODE,Tail PPNODE,ipos int) {
	var i int = 0;
	var isize int = 0;
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
		for i =1;i < ipos - 1;i++ {
			temp = temp.next;
		}

		temp2 = temp.next;
		temp.next = temp2.next;
		(temp2.next).prev = temp;

		temp2 = nil;
	}
}

func Display(Head PNODE,Tail PNODE) {
	if((Head == nil)&&(Tail == nil)) {
		fmt.Println("Linked List Is Empty....!!");
		return;
	} else {
		fmt.Println("Elements of Linked List are : ");
		for(Head != Tail) {
			fmt.Printf("|%d|<=>",Head.data);
			Head = Head.next;
		}
		fmt.Printf("|%d|<=>",Head.data);
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
	var iret int = 0;
	var ipos int = 0;
	var ielem int = 0;

	fmt.Println("Jay Ganesh.....");
	
	for(true) {
		fmt.Println("-------------------------Doubly Circular Linked List Demonstration--------------------------");
		fmt.Println("1. Insert Element At First Position.");
		fmt.Println("2. Insert Element At Last Position.");
		fmt.Println("3. Insert Element Atm Given Position.");
		fmt.Println("4. Display Elements of Linked List.");
		fmt.Println("5. Count Elements Present in Linked List.");
		fmt.Println("6. Delete Element From First Position.");
		fmt.Println("7. Delete Element From Last Position.");
		fmt.Println("8. Delete Element From Given Position.");
		fmt.Println("0. Exit");

		fmt.Println("Enter Your Choice :");
		fmt.Scan(&ino);

		switch(ino) {
			case 1 : 
			{
				fmt.Print("Enter One Value To Insert : ");
				fmt.Scan(&ielem);

				InsertFirst(&First,&Last,ielem);

				break;
			}
			case 2 : 
			{
				fmt.Print("Enter One Value To Insert : ");
				fmt.Scan(&ielem);

				InsertLast(&First,&Last,ielem);

				break;
			}
			case 3 : 
			{
				fmt.Print("Enter One Value To Insert : ");
				fmt.Scan(&ielem);

				fmt.Print("Enter Position To Insert Element At : ");
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

				fmt.Printf("Count of Elements Prsent in Linked List is : %d\n",iret);
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
				fmt.Print("Enter Position To Insert Element At : ");
				fmt.Scan(&ipos);

				DeleteAtPos(&First,&Last,ipos);

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