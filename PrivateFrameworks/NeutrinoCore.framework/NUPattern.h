/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPattern : NSObject {
    bool  _isFixedOrder;
}

@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isFixedOrder;
@property (nonatomic, readonly) NSArray *shortestMatch;
@property (nonatomic, readonly) NSString *stringRepresentation;
@property (nonatomic, readonly) NSSet *tokens;

+ (id)patternWithString:(id)arg1 error:(out id*)arg2;
+ (bool)scanString:(id)arg1 intoPattern:(out id*)arg2 error:(out id*)arg3;

- (id)description;
- (unsigned long long)hash;
- (bool)isDetermisitic;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPattern:(id)arg1;
- (bool)isFixedOrder;
- (bool)match:(id)arg1;
- (bool)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3;
- (id)optimizedPattern;
- (id)shortestMatch;
- (id)stringRepresentation;
- (id)tokens;

@end
