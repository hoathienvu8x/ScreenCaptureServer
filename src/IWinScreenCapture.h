/*************************************************************************************************/
/* Project: Screen capture server                                                                */
/* Author: @aviloria (GitHub)                                                                    */
/*-----------------------------------------------------------------------------------------------*/
/* Copyleft license                                                                              */
/*    YOU ARE ALLOWED TO FREELY DISTRIBUTE COPIES AND MODIFIED VERSIONS OF THIS WORK WITH        */
/*    THE STIPULATION THAT THE SAME RIGHTS BE PRESERVED IN DERIVATIVE WORKS CREATED LATER.       */
/*************************************************************************************************/
//-------------------------------------------------------------------------------------------------
#ifndef __IWINSCREENCAPTURE_H__
#define __IWINSCREENCAPTURE_H__
//-------------------------------------------------------------------------------------------------
#include <Windows.h>
#include <atlimage.h>
//-------------------------------------------------------------------------------------------------
DEFINE_GUID(ImageFormatJPEG, 0xb96b3cae, 0x0728, 0x11d3, 0x9d, 0x7b, 0x00, 0x00, 0xf8, 0x1e, 0xf3, 0x2e);
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

/**
* Interface class to define basic screen capture methods
*/
class IWinScreenCapture
{
public:
	IWinScreenCapture() {}
	virtual ~IWinScreenCapture() {}

	virtual BOOL getCurrentScreenSize(UINT &nSizeX, UINT &nSizeY) const = 0;

	virtual BOOL captureScreenRect(UINT nX0, UINT nY0, UINT nSizeX, UINT nSizeY, CImage &img) = 0;
};
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
#endif // __IWINSCREENCAPTURE_H__
//-------------------------------------------------------------------------------------------------
