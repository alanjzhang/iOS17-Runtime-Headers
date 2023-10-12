/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder> {
    NSDate * _signingTime;
}

@property (readonly, retain) MSOID *attributeType;
@property (readonly, retain) NSDate *signingTime;

- (void).cxx_destruct;
- (id)attributeType;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithSigningTime:(id)arg1;
- (id)signingTime;

@end