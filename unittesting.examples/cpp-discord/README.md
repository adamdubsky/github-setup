# Discord Bot

An example discord bot written in C++.

- Reply to message prefixed with `++`
- Simple stateful counter per user.
- Adding reaction to message.

## Dependencies

- [sleepy-discord](https://yourwaifu.dev/sleepy-discord/)
- [cpp-dotenv](https://github.com/adeharo9/cpp-dotenv)

The source code for both project should be fetched automatically during cmake's configuration phase.

## Compilation Note

This project relies on [cmake](https://cmake.org/), so make sure that you have it installed.

``` shellsession
$ mkdir build
$ cd build
$ cmake ..
$ make
```

On school server, use `cmake .. -DCMAKE_USE_OPENSSL=1` to make libcurl use SSL. For clangd user,
use `-DCMAKE_EXPORT_COMPILE_COMMANDS=1` to generate the `compile_commands.json`.

## Creating bot

1. Visit [https://discord.com/developers/applications](https://discord.com/developers/applications) and create application.

![image](https://user-images.githubusercontent.com/54723539/139171491-5064fecd-53d6-44d9-a1d7-8ee23b88fe21.png)

2. Create new bot by visit "Bot" tab on the sidebar and click "Add Bot". The token is under your bot's username.

![image](https://user-images.githubusercontent.com/54723539/139171856-168b7902-941c-47de-b1a0-940853b2d3cc.png)

3. Click on "OAuth2" tab, under "OAuth2 URL Generator", check the "bot" scope. Then check

   - Send Messages
   - Read Message History
   - Add Reactions
   
   Visit the URL shown in the browser, and add bot to the server that you own.
 ![image](https://user-images.githubusercontent.com/54723539/139172141-64e3296a-fd02-4522-a1a2-900afd085910.png)


## Running

Obtain the valid bot token from Discord's developer portal. Create a `.env` file from `env.template`,
and replace `token` with the one you obtained. Make sure that the `.env` file is in the 
working directory where you run the binary.

For example, if you have `.env` on the same level as this readme file, you can run the binary from
the same level using relative path `./build/bot`.
