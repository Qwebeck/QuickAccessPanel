# QuickAccessPanel
Narrower and improved version of project from repository https://github.com/fobannit-studio/Vass-2.

<h1>Description</h1>
The main motivation of application creation was to make your favourite apps reachable from everywhere at any time. 
Solution that was choosen here -- is reachable from everywhere panel with shortcuts.

<h1>Get started</h2>
To start an application you should type the following commands. 

```
git clone https://github.com/Qwebeck/QuickAccessPanel.git

cd QuickAccessPanel

./QuickAccessPanel
```

An icon that will appear in your notification area will tell that, operation succeed, an program start its event loop waiting for your commands.
![tl](https://github.com/Qwebeck/QuickAccessPanel/blob/master/Vass-2/toolbar.png)

After that you will have two options:

1. To start using it by pressing a default shortcut `Ctrl + M`, that will open a panel where will appear your shortcuts.

![empty](https://github.com/Qwebeck/QuickAccessPanel/blob/master/Vass-2/empty.png) 

You can add images, shell scripts, pdf-files, .doc documnets, etc. directly from this panel.
Two things to notice:

  1.it doesn't support binary programs.
  
  2.if there are graphics with the same name as file you are adding and in the the same directory, with that file -- program will use it that graphics as icons. On picture below you can see an example of that functionality. ( File that was adde clion.sh, in the same directory lies file clion.png, so program use it as icon.) 
  
![Screenshot](https://github.com/Qwebeck/QuickAccessPanel/blob/master/Vass-2/screenshot.png)

2. The second option -- is to start from configuration window. You can do that by pressing shortcut `Ctrl+Q`, or by clicking on icon of application in toolbar and choosing there option `Show configuration window`
  
![Config](https://github.com/Qwebeck/QuickAccessPanel/blob/master/Vass-2/configuration_window.png)

Here you can check current shortcuts, by clicking on `Help button`. Also there you can change shortcuts of aplication o more comfortable for you.After finishing edit - press `Submit`.


<h1>Notes</h1>

1.Sometimes, using an aplication you could meet next picture. It means, that programm can't figure out an extension of file to choose a default icon for that, and also there are no images in folder with the same name.
![unknown](https://github.com/Qwebeck/QuickAccessPanel/blob/master/Vass-2/unknown.png)


2. Quick panel also allows you to add your links to your photos. Because photo could be hard enough, so it cold take more time for panel to appear, was decided to show to users default icons, instead of images by itself. You change this in configuration window by enabling and disabling a checkpoint.
![wim](https://github.com/Qwebeck/QuickAccessPanel/blob/master/Vass-2/images_with_option_activate_images.png)
![wim2](https://github.com/Qwebeck/QuickAccessPanel/blob/master/Vass-2/images_with_icons.png)
