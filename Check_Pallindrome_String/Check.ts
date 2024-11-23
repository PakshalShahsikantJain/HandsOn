/*
    Author : Pakshal Shashikant Jain 
    Date : 21/09/2023
    Program : Accept string from user and check whether the string is palindrome    
              or not without considering its case.

              Input : "1abccBA1"
              Output : TRUE
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringPallindrome 
{
    //Characteristics of Class
    str : string;
    arr : any[];

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.arr = [];
    }   

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "Pakshal";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Check String is Pallindrom or Not
    StrPallindrome() : boolean
    {
        var first : number = 0;
        var last : number = 0;
        var ascii : number = 0;

        if(this.str == null)
        {
            return false;
        }

        while(last != this.arr.length)
        {
            last++;
        }

        last--;

        //Logic To Check
        while(first <= last)
        {
            if((this.arr[first] >= 'A')&&(this.arr[first] <= 'Z'))
            {
                ascii = this.arr[first].charCodeAt() + 32;
                this.arr[first] = String.fromCharCode(ascii);
            }

            if(first != last)
            {
                if((this.arr[last] >= 'A')&&(this.arr[last] <= 'Z'))
                {
                    ascii = this.arr[last].charCodeAt() + 32;
                    this.arr[last] = String.fromCharCode(ascii);
                }   
            }

            if(this.arr[first] != this.arr[last])
            {
                break;
            }

            first++;
            last--;
        }

        if(this.arr[first] != this.arr[last])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}//End of Class

////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main()
{
    var bret : boolean = false;

    console.log("Jay Ganesh......");

    //Creating object of StringPallindrome Class
    var sobj = new StringPallindrome();

    //Call To Behaviours of Class
    sobj.Accept();
    bret = sobj.StrPallindrome();


    //Handeling Condition if bret is True
    if(bret == true)
    {
        console.log("String is Pallindrome");
    }
    else
    {
        console.log("String is Not Pallindrome");
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();