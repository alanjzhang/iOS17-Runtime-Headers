/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFINPersonContact : WFContact {
    INPerson * _person;
}

@property (nonatomic, retain) INPerson *person;

+ (id)contactWithPerson:(id)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)INPersonRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithINPerson:(id)arg1;
- (id)person;
- (void)setPerson:(id)arg1;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
