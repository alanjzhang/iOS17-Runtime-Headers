/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDTextureAssetInfo : NSObject <NSCopying> {
    NSURL * _fileURL;
    bool  _flipped;
    unsigned long long  _mipLevel;
    long long  _textureFace;
}

@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic) bool flipped;
@property (nonatomic) unsigned long long mipLevel;
@property (nonatomic, copy) NSURL *mipsURL;
@property (nonatomic) long long textureFace;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fileURL;
- (bool)flipped;
- (unsigned long long)mipLevel;
- (id)mipsURL;
- (void)setFileURL:(id)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setMipLevel:(unsigned long long)arg1;
- (void)setMipsURL:(id)arg1;
- (void)setTextureFace:(long long)arg1;
- (long long)textureFace;

@end
