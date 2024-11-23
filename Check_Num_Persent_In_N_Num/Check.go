/*
    Author : Pakshal Shashikant Jain 
    Date : 30/06/2023
    Program : Accept N numbers from user check whether that numbers contains 11 in it or not.
              Input : N : 6
                      Elements : 85 66 11 80 93 88
              Output : 11 is present

              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 11 is absent
*/

//Required Libraries
package main 
import "fmt" 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check 11 is Present in Entered N Numbers
func Check(arr []int,isize int ) bool {
	var i int = 0;

	//Logic To Check
	for i = 0;i < isize - 1;i++ {
		if (arr[i] == 11) {
			break;
		}
	}

	//Handeling Conditions
	if (arr[i] == 11) {
		return true;
	} else {
		return false;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;
	var bret bool = false;

	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter Number of Elements you want in array : ");
	fmt.Scan(&isize);
	
	//Allocating Memory To array
	arr = make([]int,isize);
	
	//Entering Elements in array
	fmt.Println("Enter Elements in array : ");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number : %d\n",i + 1);
		fmt.Scan(&arr[i]);
	} 

	//Call To Check Function
	bret = Check(arr,isize);
	
	//Handeling Conditions
	if bret == true {
		fmt.Println("11 is Present in Entered Number");
	} else {
		fmt.Println("11 is Not Present in Entered Number");
	}
}