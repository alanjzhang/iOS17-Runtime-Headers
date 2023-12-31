/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSVideoDerivativeSpecification : NSObject {
    double  _bitRate;
    unsigned long long  _mediaAssetType;
    bool  _powerRequired;
    bool  _useCellular;
    NSString * _videoType;
}

@property (nonatomic, readonly) double bitRate;
@property (nonatomic, readonly) unsigned long long mediaAssetType;
@property (nonatomic, readonly) bool powerRequired;
@property (nonatomic, readonly) bool useCellular;
@property (nonatomic, readonly) NSString *videoType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;

- (double)bitRate;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)mediaAssetType;
- (bool)powerRequired;
- (bool)useCellular;
- (id)videoType;

@end
