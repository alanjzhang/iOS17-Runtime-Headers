/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUTokenPattern : NUPattern {
    NSString * _token;
}

@property (readonly) NSString *token;

- (void).cxx_destruct;
- (id)init;
- (id)initWithToken:(id)arg1;
- (bool)isEqualToPattern:(id)arg1;
- (bool)isEqualToTokenPattern:(id)arg1;
- (bool)isFixedOrder;
- (bool)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3;
- (id)optimizedPattern;
- (id)shortestMatch;
- (id)stringRepresentation;
- (id)token;
- (id)tokens;

@end
