/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRImageInfo : NSObject {
    <TXRBuffer> * _buffer;
    unsigned long long  _bytesPerImage;
    unsigned long long  _bytesPerRow;
    NSError * _error;
    unsigned long long  _offset;
}

@property (nonatomic, retain) <TXRBuffer> *buffer;
@property (nonatomic) unsigned long long bytesPerImage;
@property (nonatomic) unsigned long long bytesPerRow;
@property (retain) NSError *error;
@property (nonatomic) unsigned long long offset;

- (void).cxx_destruct;
- (id)buffer;
- (unsigned long long)bytesPerImage;
- (unsigned long long)bytesPerRow;
- (id)error;
- (unsigned long long)offset;
- (void)setBuffer:(id)arg1;
- (void)setBytesPerImage:(unsigned long long)arg1;
- (void)setBytesPerRow:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end
