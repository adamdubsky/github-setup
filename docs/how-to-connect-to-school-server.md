# How to connect to 3rd Floor Linux Computers from ...

## Windows

1. Open the Command Prompt or Windows PowerShell. It can be opened through various methods:
   - For the Command Prompt, type in WINDOWS-R, then type in "cmd" in the dialog box.
   - Bring up start menu, and search for "Command Prompt" or "PowerShell"

2. In the window with the command prompt (or powershell), type in this command for ssh:

```console
ssh username@pu1.cs.ohio.edu
```

Don't forget to replace `username` with your actual username (it is not the same one as your email handle). If you forget your username, or password you can contact the system administrator, Mr. Carl Hawes.

If the error mentioned the ssh command is not found, you need to enable the OpenSSH client feature by searching for "Manage optional features" in the start menu,
and click "Add a feature", then search for "OpenSSH Client", and install it.

For example, here is the output from putting `ssh changliu@pu1.cs.ohio.edu` in command prompt

```console
C:\Users\Chang Liu>ssh changliu@pu1.cs.ohio.edu
The authenticity of host 'pu1.cs.ohio.edu (132.235.1.15)' can't be established.
ECDSA key fingerprint is SHA256:PCIKPlKu35MHGF+zSgDUbEvFRNDN8vapyp7lYVI+O8Q.
Are you sure you want to continue connecting (yes/no)? yes
Warning: Permanently added 'pu1.cs.ohio.edu,132.235.1.15' (ECDSA) to the list of known hosts.
changliu@pu1.cs.ohio.edu's password:


      NEW SERVER CONFIGURATION:

  pu1.cs.ohio.edu has the same configuration as the machines in
  room 307, including tesla video card. Using this machine remotely
  instead of one of the ones in 307 for graphics will avoid
  conflicts with anyone logged in at the workstation.

   pu2.cs.ohio.edu is a nice 16 core ubuntu server with an Intel Xeon CPU
   with 2 threads per core, and  24 gigs of ram

   pu3.cs.ohio.edu  is a very nice ubuntu server with an AMD 32 core
   Processor, 2 treads per core, and 32 gig of ram.


   p1.cs.ohio.edu  and p2.cs.ohio.edu
   are Sun Sparc cpu based machines that run Solaris 10.

   px1.cs.ohio.edu is an x86 based machine running ubuntu.

   tesla2.cs.ohio.edu is an x86 with 2 nvidia cards, one of
   which is a tesla card

   The Solaris machines are nice to check the execution of your
   programs on as the different architectures often expose
   bugs you would not normally see.

  RATHER THAN SSH INTO A WORKSTATION IN THE LABS , PLEASE USE OUR SERVERS.
Last login: Wed Nov 20 13:25:21 2019 from 74.113.47.217
.bash_profile executed.
changliu@pu1:~$ which doxygen
/usr/bin/doxygen
changliu@pu1:~$ doxygen
error: Doxyfile not found and no input file specified!
Doxygen version 1.8.13
...
```
pu[1-3].cs.ohio.edu are the preferred remote servers. odd[?].cs.ohio.edu are the workstations in the 3rd floor lab.

You also have an option to use software like [PuTTY](https://www.putty.org/). To connect click on session on the left side bar, and enter pu[1-3].cs.ohio.edu for "Host Name". Make sure that "Connection Type" is SSH. Then you can click open, PuTTY will prompt you for a username and password.

## MacOS

Follow the same steps for Windows, but use "Terminal" app instead.

## Connect via vscode

By using the extension call Visual Studio Code Remote Development [https://code.visualstudio.com/docs/remote/remote-overview](https://code.visualstudio.com/docs/remote/remote-overview), you can use vscode on your laptop (or from PC in the classroom; see the first extra note) to edit a file on the school server.

You will also have access to GUI for git that vscode has as well. But do not forget to still study which Git command does what since this class is focusing on that.

To have a better experience, you will have to use SSH key authentication where you are not required to type password every time you are logging into the school server. Please see this article for how to do it: [https://www.digitalocean.com/community/tutorials/how-to-configure-ssh-key-based-authentication-on-a-linux-server](https://www.digitalocean.com/community/tutorials/how-to-configure-ssh-key-based-authentication-on-a-linux-server)

This is what I usually have in my ~/.ssh/config for the school server.

![ssh-config](../.github/images/ssh-config.png)

Then in the extension you will see the list of SSH targets.

![ssh-config](../.github/images/ssh-targets-list.png)

Then you can connect to the school server and edit file from within vscode.
