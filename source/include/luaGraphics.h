/*----------------------------------------------------------------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#------  This File is Part Of : ----------------------------------------------------------------------------------------#
#------- _  -------------------  ______   _   --------------------------------------------------------------------------#
#------ | | ------------------- (_____ \ | |  --------------------------------------------------------------------------#
#------ | | ---  _   _   ____    _____) )| |  ____  _   _   ____   ____   ----------------------------------------------#
#------ | | --- | | | | / _  |  |  ____/ | | / _  || | | | / _  ) / ___)  ----------------------------------------------#
#------ | |_____| |_| |( ( | |  | |      | |( ( | || |_| |( (/ / | |  --------------------------------------------------#
#------ |_______)\____| \_||_|  |_|      |_| \_||_| \__  | \____)|_|  --------------------------------------------------#
#------------------------------------------------- (____/  -------------------------------------------------------------#
#------------------------   ______   _   -------------------------------------------------------------------------------#
#------------------------  (_____ \ | |  -------------------------------------------------------------------------------#
#------------------------   _____) )| | _   _   ___   ------------------------------------------------------------------#
#------------------------  |  ____/ | || | | | /___)  ------------------------------------------------------------------#
#------------------------  | |      | || |_| ||___ |  ------------------------------------------------------------------#
#------------------------  |_|      |_| \____|(___/   ------------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#- Licensed under the GPL License --------------------------------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#- Copyright (c) Nanni <lpp.nanni@gmail.com> ---------------------------------------------------------------------------#
#- Copyright (c) Rinnegatamante <rinnegatamante@gmail.com> -------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#- Credits : -----------------------------------------------------------------------------------------------------------#
#-----------------------------------------------------------------------------------------------------------------------#
#- Smealum for ctrulib -------------------------------------------------------------------------------------------------#
#- Special thanks to Aurelio for testing, bug-fixing and various help with codes and implementations -------------------#
#-----------------------------------------------------------------------------------------------------------------------*/
struct Bitmap{
	u8* pixels;
	int width;
	int height;
	u16 bitperpixel;
};
extern u8* TopLFB;
extern u8* TopRFB;
extern u8* BottomFB;
Bitmap LoadBitmap(char* fname);
void PrintScreenBitmap(int xp,int yp, Bitmap result,int screen,int side);
void PrintImageBitmap(int xp,int yp, Bitmap result,int screen);
u8* flipBitmap(u8* flip_bitmap, Bitmap result);
void DrawImagePixel(int x,int y,u32 color,Bitmap* screen);
void DrawPixel(u8* screen,int x,int y,u32 color);
void DrawScreenText(int x, int y, char* str, u32 color,int screen,int side);
void DrawImageText(int x, int y, char* str, u32 color,int screen);
void RefreshScreen();
void DebugOutput(char* str);
void FillImageRect(int x1,int x2,int y1,int y2,u32 color,int screen);
void FillScreenRect(int x1,int x2,int y1,int y2,u32 color,int screen,int side);
void FillScreenEmptyRect(int x1,int x2,int y1,int y2,u32 color,int screen,int side);
void FillImageEmptyRect(int x1,int x2,int y1,int y2,u32 color,int screen);
void ClearScreen(int screen);
u32 GetPixel(int x,int y,int screen,int side);
u32 GetImagePixel(int x,int y,Bitmap* screen);