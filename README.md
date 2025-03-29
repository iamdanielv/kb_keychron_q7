# Keychron Q7 - 🚧 Custom QMK firmware

![Keychron Q7](https://i.imgur.com/dMnFpx0h.jpg)

## ⚠️ Disclaimer
> [!CAUTION]
> This is a custom firmware that could break your keyboard.
>
> 🛑 **Use at your own risk!** 🛑
> 
> I have tried my best to make sure everything works, but I may miss something.
>
> It works for my keyboard, but there may be revisions in the future that are not compatible. Use at your own risk!

## 🥳Thanks!

Thanks to the [Keychron](https://github.com/keychron/) team for providing fully working code!
This was super easy to get started with and add my modifications.

## 🖥️ Compiling

You can use QMK builder with the following command:

```shell
qmk compile -j 0 -kb keychron/q7/ansi -km iamdanielv
```

> the `-j 0` uses parallel build to speed it up a bit

qmk should generate a new bin file: `keychron_q7_ansi_iamdanielv.bin` in your qmk_firmware folder.

For me it was: `C:\Users\<USER>\qmk_firmware\keychron_q7_ansi_iamdanielv.bin`


## 🎉 Conclusion and Next Steps

**That's it!** You now should be able to flash the custom firmware using qmk toolbox.

Let me know if you have any questions. I can be reached at [@IAmDanielV](https://twitter.com/IAmDanielV) or [@iamdanielv.bsky.social](https://bsky.app/profile/iamdanielv.bsky.social).

