/* Generated by RuntimeBrowser.
 */

@protocol CNMeCardSharingAvatarImageDataProvider <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (NSData *)imageData;
- (NSData *)thumbnailImageData;
- (CNWallpaper *)wallpaper;

@end
