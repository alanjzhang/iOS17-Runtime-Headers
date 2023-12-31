/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage {
    NSDictionary * _backingDict;
    NSArray * _segments;
}

@property (nonatomic, readonly) NSDictionary *backingDict;
@property (nonatomic, readonly) NSArray *segments;

- (void).cxx_destruct;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (id)backingDict;
- (id)initWithDict:(id)arg1 metadata:(id)arg2;
- (id)literalPrefixAtIndex:(unsigned long long)arg1;
- (id)placeholderAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeholderCount;
- (id)segments;
- (unsigned long long)state;

@end
