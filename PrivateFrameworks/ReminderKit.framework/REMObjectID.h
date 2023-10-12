/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMObjectID : NSObject <NSCopying, NSSecureCoding, REMCRMergeableDataType, REMDAChangedIdentifierResult> {
    NSString * _entityName;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *entityName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *stringRepresentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *urlRepresentation;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)objectIDWithURL:(id)arg1;
+ (id)objectIDWithUUID:(id)arg1 entityName:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 entityName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)stringRepresentation;
- (id)urlRepresentation;
- (id)uuid;

// REMObjectID (CRDT_Additions)

+ (void)initialize;
+ (void)rem_registerClassAtCRCoderIfNeeded;

- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
