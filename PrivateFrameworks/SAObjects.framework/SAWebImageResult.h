/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebImageResult : SAWebWebResult

@property (nonatomic, copy) NSNumber *fileSize;
@property (nonatomic, retain) SAWebAcePicture *picture;
@property (nonatomic, copy) NSArray *thumbNails;

+ (id)imageResult;
+ (id)imageResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fileSize;
- (id)groupIdentifier;
- (id)picture;
- (void)setFileSize:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setThumbNails:(id)arg1;
- (id)thumbNails;

@end
