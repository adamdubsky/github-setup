Author: Alexander Nemecek
Date: 10/25/2020
Brief: Description of the programming language ArnoldC, along with documentation of the file fib.arnoldc.
   _____                      .__       .____________  
  /  _  \_______  ____   ____ |  |    __| _/\_   ___ \ 
 /  /_\  \_  __ \/    \ /  _ \|  |   / __ | /    \  \/ 
/    |    \  | \/   |  (  <_> )  |__/ /_/ | \     \____
\____|__  /__|  |___|  /\____/|____/\____ |  \______  /
        \/           \/                  \/         \/

ArnoldC is a fun and goofy programming language comprised and implemented using only
one-liners of THE Arnold Schwarzenegger.  The program is designed to output the fibonacci sequence.  You are able to implement how far you want to go in the fibonacci sequence on line 4 by changin the value after "YOU SET US UP" however, the you can only output between the 3rd value and the 47th value in the sequence with an offset of 2. 

Example: If I wanted to find the all values in the fibonacci sequence up to the 10th term, I would implement the value on line 4 as "8"

The reasioning behind the sequence only being able to go up to the 47th value is because after which, numbers become negative since the highest suppoted integer in ArnoldC is 2^31.

............'',;::;,''''''',,,,,,;,',,,'''',,,,,,;;;,,''''''',,,;;:ccccccooooc,''...................
...............,;;,'......',,,,,,'.........',,''',,''...........',;:::cldxkxdc'..................   
       .  .....';;,,,;;;;;;''''........'...,:;,;;,''............'''..',;:cllc;...                   
           ...,:ccclolc;,''.........';::;,,:olclolc:,''',,''',;:lool:;,;;;:;,''...                  
           .....,;;;;'.........,,,;coxkxdodkOOkO000Oxdoooolc:;,,;cx0K0xl;,,;;;,,,..                 
          ....';cccc;'......,;;;cdO00KK0KKKKKKKKKKKKKKK000Okxddoolod0XX0d;'........                 
           ...,:cool;,....,:c::lxO0000KKKKKKKKKKKKKKKKKKKKKKK000KKKkdkKXKd;......                   
           ..;c:clc:,...':ccccldxkkOOO0KKKKKKKKKKKKKKKKKKKK00OO00K0xclkKXOc'....                    
           .;c:::;'.....;ccccloddxkkkO0KKKKKKKKKKKKKKKKKKKK00Okxdol:,:x00kc'....                    
           .;;;,'.......';;:cclodxkO00KKKKKKKKKKKKKKKKKXXXXXK00Oxl:,,cdOOx:.....                    
           ...............',;:codxkO0KKKKKKKKKKKKKKKKKKXXXXXKKKKOd:''lxkxd;.....                    
          ..................,;:lodxkkkO00KKKKKKKKKKKKKXXXXXXKK0Oxl;..:dkxdc'.....                   
           .................',:coddddddxxkO000KKKKKKKKKKKKKK00Okdc,..:dkxkkc....                    
           .................,:lodxxkkxxxxkkOOOOO00000000OOkkxdddoc;,';ldddkl....                    
           .... ............,;;;;;;;;,,,;;;'''',,,;;;;;;;;''...........''''....                     
           .     . ..................................',,................','.... .                   
                  ...................................'',..................,....                     
                  ......... ................... .....,;'..........,:,.....''.....                   
           .  .    .......  .....''...''''''..  ....lO0x:....'....lxl'.,..',....                    
           .         ....   ...........'..''..  ..'cOKXXO:...'........',..',.. .                    
           .         ....    ..............    ..:dk0KXXKOc'..............;;.                       
           .         .....             .    . .':xO00KXXXKOl;............,;,..                      
            ..        ....                 ...':oO00KKXXXXKOo:,....  ..........                     
            ..        .....................',::okkkkk0KKXXKKOdc;'........';cc,.                     
            ..        .....',,;;;;::::::cllolccddlcccldxkkxddxo:,'..'',;:lkKOl..                    
            ......      ...,;::cccllllllooooooc:c:,,',;:cc:;:llc,'..',;;;ckKKd'.                    
             .,:,...     ..',;;:ccccccllllldkOd::::;;;::cc:;:lxxl,...',;,;okOl..                    
             .,c;....    ...',;::::::cccloxOKKkl:;,,,;;::;;:coOKOo;...,,''';;..                    .
              .';:'...    ..',,;;;;;;;:cokO000Okxxddolc::lxO0KKK0xl:'.''.,;..                    .',
              ..;c:;,..   ...'',,,,,,;coxkkxddxxxdoollllooddxkO0Odc;'..'',;.                  ..,;:;
               .';;;;'.   ..''''.''',:oxxxoc:::;;,,;:ccccccc:;:lol:'..';;;,.               ..';:;,..
                 .....    ..''.....';ldxkdl;,',;:lodkOOOOOOOkdc;;;,..'.,lxd;.            .';;:;'.   
                         ..','.....,:coxkOdc:ccloooooooooooodxxdlc,.'',,cOKl.         ..,;:;,..     
                         ..'''.....',:cokOOkdoollccccccc:cccc::cl:,'',,',ox:.      ..';:;,'.        
                          ..''.......,;cloddollllllllllllllc:;,;:;.';,';;;'..    .',;:;'..          
                           ...........',,;::::cccllllldxkkxdo:;,'''.,'';:'.   ..,;:;,..             
                            .............',,;:clloooodkOOOkkxoc'..,',',cd:. .';:;,'.                
                                   .......',;cloodddddxxdoool:;...'''',d0o....''..                  
                         .....       .......';::cccllcccclc:;;;,''..,,,o0x'  ....';;...             
'..                      ...'''..         ....',;;;;:::::;,'.';;'..';:,cOO;.  ....;::loc:,..        
;:;,'..                   ..'',;,'..        ...',,,,;;;;;,'......;oo:,.;k0c.  .....'';ccclddl:,. ...
.',;;;;,...  .            ...',;;;,'..       ....''',,,,,'......;xKkc;';x0o.      ..,,;,,;:cokOkolc;
   ..',;::,'.              ..',;;;;;,'................'''''.....;xOo::,;d0x'        .',,,;,,;:coddc:
;.    .'::,......          ..',;;;;;;;''..'',,,;:ccccccccc:;'...,cl;,;,:dOk:.          .'ccccc:,',;l
lc;,,;:ol:,,;,..           ..',,;,;;;;;,'''',;:cloooooooolc;,...,;;;;;'cxOOc.           .'cdxkd:....
 ...':odxolol'.        ...  ..',,,;;;;;,,''',,;:cclloooolc:;,''',:;;:c;cxOkl'..           .;oO0xl;..
 .':oddlldkOd'        ...   ..',,,;;;;;;;,,',,;;::cclllllc:;,''.'::;::,;dkkl,'....         .,d00Oxc,
;dOKKKK0d:oO0o.       .'.   ..'',,,;;;;;:;;,,,;;::::cccccc:;,''.';;,',',okkl,.',''..        .;kK00kd
0KKKKKKKx;;ld:.       ''    ...'',,,;;;;:::;,,;;::::cccccc::;,'',;;,';,,lOOo,..',,,'.        .cO0OOk
KKKKKKK0o'','.       .;.    ....'',,,,;;::::;;;:::cccccccc:;;,,,;;;:,,''ckOo;'. .,;,'..       .oOkkO
KKKKKKKO:..'.        ':.    .....''',,;;::c::;;::cccccccc::;;,,''',l:'..;xko:,.  .:c,...      .cOkxx

How to run the fibonacci example.
1. Make sure Java is installed on your machine and if using Visual Studio Code install the extension "ArnoldC Language".
2. Cd into the folder where the program file is stored.
3. Run the command {java -jar ArnoldC.jar fib.arnoldc}.
This will create a file named "fib.class" (Don't worry about it).
4. Run the command {java fib}.
The ouput will be shown in the terminal.

ArnoldC does not allow for documentation, so below is line by line documentation
for the fib.arnoldc program:

1.) "IT'S SHOWTIME" - This is the start of main, every program must start with this line.

3.) "HEY CHRISTMAS TREE" - Declares integer, in this case declares variable maxVal.
4.) "YOU SET US UP" - Sets the initial value to the variable, so maxVal is set to 8.

6.) Declares variable i.
7.) Sets initial value of i to 0.

9.) Declares variable j.
10.) Sets initial value of j to 1.

12.) Declares variable term.
13.) Sets initial value of term to 0.

15.) Declares variable count.
16.) Sets initial value of count to 0.

18.) Declares variable lessThan.
19.) Sets initial value of lessTham to 1.

21.) "TALK TO THE HAND" - Ouputs to the terminal, in this case, outputs 0 (first term in sequence).
22.) Outputs 1 to the terminal (second term in sequence).

24.) "STICK AROUND" - Declaration of a while loop with the variable lessThan.

26.) "GET TO THE CHOPPER" - Assigns the variable, in this case, variable term is being set to a new value inside the while loop. 
27.) "HERE IS MY INVITATION" - Sets the variable to the new values. Variable term is set to variable i.
28.) "GET UP" - Addition operation, so term which is now equal to i gets value j added.
29.) "ENOUGH TALK" - End of the assign variable operation. Lines 26-29: term = i + j.

31.) Outputs the variable term.

33.) Variable i is being assigned a new value.
34.) i is set equal to the value of j.
35.) End of the assign variable operation. Lines 33-35: i = j.

37.) Variable j is being assigned a new value.
38.) j is set equal to the value of term.
39.) End of the assign variable operation. Lines 37-39: j = term.

41.) Variable count is being assigned a new value.
42.) count is set equal to itself.
43.) count is being incremented by 1.
44.) End of the assign variable operation. Lines 41-44: count = count + 1 OR count++.

46.) Variable lessThan is being assigned a new value.
47.) lessThan is set equal to the value of maxVal.
48.) "LET OFF SOME STEAM BENNET" - Makes sure count is not greater than maxVal. Program runs in forever without this check.
49.) End of the assign variable operation.

51.) "CHILL" - This line is the end of the while loop.

53.) Variable count is being assigned a new value.
54.) count is set equal to itself.
55.) count is being incremented by 2.
56.) End of the assign variable operation. Lines 53-56: count = count + 2.

58.) Separation between the values of the sequence and the term stopped at.
59.) Ouput "Sequence up to: " to the terminal.
60.) Variable count is printed at the terminal as the term the sequence stopped at.

62.) "YOU HAVE BEEN TERMINATED" - This is the end of main, all programs must end with this line.
