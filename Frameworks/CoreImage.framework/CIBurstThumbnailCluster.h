/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstThumbnailCluster : NSObject {
    NSMutableArray * burstImages;
    id /* block */  completionBlock;
    CIBurstYUVImage * image;
    NSMutableDictionary * imageProps;
}

@property NSMutableArray *burstImages;
@property id /* block */ completionBlock;
@property CIBurstYUVImage *image;
@property NSMutableDictionary *imageProps;

- (void)addItemsFromCluster:(id)arg1;
- (id)burstImages;
- (id /* block */)completionBlock;
- (float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3;
- (void)dealloc;
- (id)image;
- (id)imageProps;
- (id)init;
- (id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)releaseImage;
- (void)setBurstImages:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setImageProps:(id)arg1;

@end