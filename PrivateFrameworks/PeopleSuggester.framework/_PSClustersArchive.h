/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSClustersArchive : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _archiveDate;
    NSDictionary * _clustersDictionary;
}

@property (nonatomic, readonly) NSDate *archiveDate;
@property (nonatomic, readonly) NSDictionary *clustersDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archiveDate;
- (id)clustersDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClustersDictionary:(id)arg1 archiveDate:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
