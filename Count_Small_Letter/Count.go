/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and count number of
              small characters.

              Input : “Marvellous”
              Output : 9  
*/

///////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main 
import "fmt"
import "bufio"
import "os"

//////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Small Letters
func Count(str string) int {
	var arr []rune = nil;
	var i int = 0;
	var icnt int = 0;

	//Converting String To Character array
	arr = []rune(str);

	//Logic To Count 
	for i = 0;i < len(arr);i++ {
		if ((arr[i] >= 'a')&&(arr[i] <= 'z')) {
			icnt++;
		}
	}

	return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iret = 0;
	var str string = " ";
	var err error = nil;

	fmt.Println("Jay Ganesh.....");
	
	//Taking input from user
	var bobj = bufio.NewReader(os.Stdin);
	str,err = bobj.ReadString('\n');

	if (err != nil) {
		fmt.Println("An Error Occured");
	}

	//Call To Count Function
	iret = Count(str);

	//Printing Count Calculated 
	fmt.Printf("Count of Small Letter in Entered String (%s) is : %d",str,iret);
}