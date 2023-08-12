/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and return
              difference between frequency of small characters and frequency of
              capital characters.

              Input : “MarvellouS”
              Output : 6 (8-2) 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"
import "bufio"
import "os"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Difference
func Difference(str string) int {
	var arr []rune;
	var i int = 0;
	var icnt int = 0;
	var icnt2 int = 0;
	var idiff int = 0;

	//Allocating String to array
	arr = []rune(str);

	//Logic To Calculate Difference
	for i = 0;i < len(arr);i++ {
		if ((arr[i] >= 'A')&&(arr[i] <= 'Z')) {
			icnt++;
		} else if ((arr[i] >= 'a')&&(arr[i] <= 'z')) {
			icnt2++;
		}
	}

	idiff = icnt2 - icnt;

	return idiff;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var err error = nil;
	var iret int = 0;

	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter String");
	str,err = bobj.ReadString('\n');

	if (err != nil) {
		fmt.Println("Error Occured");
	}

	//Call To Difference Function
	iret = Difference(str);

	//Printing Difference Calculated
	fmt.Printf("Difference Between Small and Capital Letter is : %d",iret);
}