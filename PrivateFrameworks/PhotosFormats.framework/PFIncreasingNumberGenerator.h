/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFIncreasingNumberGenerator : NSObject <PFSeededRandomNumberGenerator> {
    unsigned long long  _seed;
}

@property (nonatomic) unsigned long long seed;

- (id)init;
- (id)initWithSeed:(unsigned long long)arg1;
- (unsigned long long)nextUnsignedIntegerLessThan:(unsigned long long)arg1;
- (unsigned long long)seed;
- (void)setSeed:(unsigned long long)arg1;

@end
