/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/APFoundation.framework/APFoundation
 */

@interface APSigningKeychainContext : NSObject <NSSecureCoding> {
    NSNumber * _contextRef;
    NSNumber * _isStashed;
    NSString * _sessionIdentifier;
}

@property (nonatomic, retain) NSNumber *contextRef;
@property (nonatomic, retain) NSNumber *isStashed;
@property (nonatomic, retain) NSString *sessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextRef;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextRef:(id)arg1 sessionIdentifier:(id)arg2 isStashed:(id)arg3;
- (id)isStashed;
- (id)sessionIdentifier;
- (void)setContextRef:(id)arg1;
- (void)setIsStashed:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
