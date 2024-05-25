/*
    Author : Pakshal Shashikant Jain 
    Date : 25/05/2024
    Program : Write a program which accepts file name from user and count number of
              small characters from that file.

              Input : Demo.txt
              Output : Number of small characters are 21
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main 
import (
	"fmt"
	"os"
	"bufio"
	"strings"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Small Characters 
func CountSmall(fname string) int {
	var icnt int = 0;
	var i int = 0;

	//Opening File in Read Only Mode 
	fd,err := os.OpenFile(fname,os.O_RDONLY,0644);
	if(err != nil) {
		fmt.Println("Unable To Open File : ",err);
	}

	//Calculating Size of File
	isize,err := fd.Seek(0,2);

	if(err != nil) {
		return -1;
	}

	//Local Array 
	arr := make([]byte,isize);

	//Brining Cursor To Initital Position
	fd.Seek(0,0);

	//Reading Data From File and Storing it in Local Array
	iret,err := fd.Read(arr);

	if(err != nil) {
		fmt.Println("An Error Occured While Reading File : ",err);
		return -1;
	} else {
		fmt.Println("Data From File is : ");
		fmt.Print(string(arr));
		fmt.Printf("\nNo of Bytes Readed Successfully = %d bytes\n",iret);
	}

	//Caluclating Count of Small Characters From File 
	for i = 0;i < len(arr);i++ {
		if((rune(arr[i]) >= 'a')&&(rune(arr[i]) <= 'z')) {
			icnt++;
		}
	}

	//Closing File 
	fd.Close();

	//Returning Count of Small Characters
	return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var fname string = " ";
	var err error = nil;
	var iret int = 0;

	fmt.Println("Jay Ganesh.....");
	
	//Taking File Name as Input From User
	fmt.Println("Enter File Name : ");
	var bobj = bufio.NewReader(os.Stdin);
	fname,err = bobj.ReadString('\n');

	if(err != nil) {
		fmt.Println("An Error Occured While Taking Input From User : ",err);
	}

	//Removing Extra Space From End of File Name 
	fname = strings.TrimSpace(fname);

	//Call To CountSmall Function
	iret = CountSmall(fname);
	fmt.Println("Count of Small Characters From File is :",iret);

	//Deallcating Memory of Object
	bobj = nil;
}
