/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
 */

@interface QLDiskCacheFileInfoEnumerator : QLDiskCacheEnumerator {
    bool  _extraInfo;
    QLCacheIndexDatabaseFileInfoEnumerator * _indexEnumerator;
    bool  _ubiquitous;
}

- (void).cxx_destruct;
- (id)initWithDiskCache:(id)arg1 forUbiquitousFiles:(bool)arg2 extraInfo:(bool)arg3;
- (id)nextFileInfo;

@end
