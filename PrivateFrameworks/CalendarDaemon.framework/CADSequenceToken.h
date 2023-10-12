/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADSequenceToken : NSObject <NSSecureCoding> {
    NSDictionary * _allDBSequenceMap;
}

@property (nonatomic, readonly) NSDictionary *allDBSequenceMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allDBSequenceMap;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAllDBSequenceMap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMainDBSequence:(int)arg1;
- (id)initWithSerializedSequenceString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)mainDBSequence;
- (int)sequenceForDatabaseID:(int)arg1;
- (id)serializedSequenceString;

@end
