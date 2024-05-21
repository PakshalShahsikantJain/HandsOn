/*
    Author : Pakshal Shashikant Jain 
    Date : 20/05/2024
    Program : Write application which accept file name from user and one string from user. Write
              that string at the end of file.

              Input : Demo.txt
                      Hello World

              Output : Write Hello World at the end of Demo.txt file 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
	"strings"
)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Append Data At The End of File
func Append(fname string,value string) {
	var iret int = 0;

	fname = strings.TrimSpace(fname);

	//Opening File in append Mode
	fd,err := os.OpenFile(fname,os.O_APPEND,0644);

	if(err != nil) {
		fmt.Println("An Error Occured,Unable To Open File : ",err);
	} else {
		fmt.Printf("File Successfully Opended With File Descritor %d",fd.Fd());
	}

	//Writing Data into File
	iret,err = fd.Write([]byte(value));

	if(err != nil) {
		fmt.Println("An Error Occured While Appending Data",err);
	} else {
		fmt.Printf("\n %d Bytes of Data Have Been Successfully Appended at the End of File",iret);
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var fname string = " ";
	var bobj = bufio.NewReader(os.Stdin);
	var err error = nil;
	var data string = " ";

	fmt.Println("Jay Ganesh.....");

	//Taking File Name as Input From User
	fmt.Println("Enter File Name : ");
	fname,err = bobj.ReadString('\n');

	//Taking Data From User
	fmt.Println("Enter Data You Want To Write at the end of File");
	data,err = bobj.ReadString('\n');
	
	if(err != nil) {
		fmt.Println("An Error Occured While Taking Input From User : ",err);
		return;
	}

	//Call To Append Function
	Append(fname,data);
}
