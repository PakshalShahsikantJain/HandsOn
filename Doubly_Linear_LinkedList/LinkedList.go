package main;
import "fmt";

type Node struct {
	data int;
	next * Node;
	prev * Node;
}

type NODE = Node;
type PNODE = * Node;
type PPNODE = ** Node;

func InsertFirst(Head PPNODE,value int) {
	var newn PNODE = new(NODE);
	newn.data = value;
	newn.next = nil;
	newn.prev = nil;

	if(*Head == nil) {
		*Head = newn;
	} else {
		newn.next = *Head;
		(*Head).prev = newn;
		*Head = newn;
	}
}

func InsertLast(Head PPNODE,value int) {
	var newn PNODE = new(NODE);
	newn.data = value;
	newn.next = nil;
	newn.prev = nil;
	var temp PNODE = *Head;

	if(*Head == nil) {
		*Head = newn;
	} else {
		for(temp.next != nil) {
			temp = temp.next;
		}

		temp.next = newn;
		newn.prev = temp;
	}
}

func InsertAtPos(Head PPNODE,value int,ipos int) {
	var newn PNODE = nil;
	var isize int = 0;
	var i int = 0;
	var temp PNODE = *Head;
	
	isize = Count(*Head);

	if((ipos < 1)||(ipos > (isize + 1))) {
		return;
	} else if(ipos == 1) {
		InsertFirst(Head,value);
	} else if(ipos == (isize + 1)) {
		InsertLast(Head,value);
	} else {
		newn = new(NODE);
		newn.data = value;
		newn.next = nil;
		newn.prev = nil;

		for i = 1;i < (ipos - 1);i++ {
			temp = temp.next;
		}

		newn.next = temp.next;
		newn.next.prev = newn;
		temp.next = newn;
	}
}

func DeleteFirst(Head PPNODE) {
	if(*Head == nil) {
		return;
	} else if((*Head).next == nil) {
		*Head = nil;
	} else {
		(*Head) = (*Head).next;
		(*Head).prev = nil;
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
	var temp PNODE = *Head;
	var temp2 PNODE = nil;
	var i int = 0;
	var isize int = 0;

	isize = Count(*Head);

	if((ipos < 1)||(ipos > isize)) {
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
		temp2.next.prev = temp;

		temp2 = nil;
	}
}

func Display(Head PNODE) {

	fmt.Println("Elements of Linked List are : ");
	for(Head != nil) {
		fmt.Printf("|%d|<=>",Head.data);
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

func main() {
	var ino int = 0;
	var iret int = 0;
	var ipos int = 0;
	var ielem int = 0;

	var First PNODE = nil;

	fmt.Println("Jay Ganesh....");
	fmt.Println("----------------------Doubly Linear Linked List Demonstration---------------------");
	
	for(true) {
		fmt.Println("---Selection any Operation From Below List of Operations To Perform On Linked List---");
		fmt.Println("1. Insert Element At First Position.");
		fmt.Println("2. Insert Element At Last Position.");
		fmt.Println("3. Insert Element At Entered Position.");
		fmt.Println("4. Display Elements of Linked List.");
		fmt.Println("5. Count No of Elements Present in Linked List.");
		fmt.Println("6. Delete Element From First Position.");
		fmt.Println("7. Delete Element From Last Position.");
		fmt.Println("8. Delete Element From Entered Position.");
		fmt.Println("0. Exit.");
		
		fmt.Println("Enter Your Choice : ");
		fmt.Scan(&ino);

		switch(ino) {
			case 1 :
			{
				fmt.Println("Enter Element Value To Insert : ");
				fmt.Scan(&ielem);

				InsertFirst(&First,ielem);

				break;
			} 
			case 2 :
			{
				fmt.Println("Enter Element Value To Insert : ");
				fmt.Scan(&ielem);

				InsertLast(&First,ielem);

				break;			
			}		
			case 3 :
			{
				fmt.Println("Enter Element Value To Insert : ");
				fmt.Scan(&ielem);

				fmt.Println("Enter Position Number To Insert Element At : ");
				fmt.Scan(&ipos);

				InsertAtPos(&First,ielem,ipos);

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
				fmt.Printf("Count of Element Present in Linked List is : %d\n",iret);	
				
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
				fmt.Println("Enter Position Number To Delete Element From : ");
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
				fmt.Println("Invalid Option Number Entered.");
				return 
			}
		}
	}
}