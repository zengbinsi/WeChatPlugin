//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFavoritesDetailBaseCell.h"

#import "MMFavoriteImageServiceExt.h"

@class MMImageView, NSString;

__attribute__((visibility("hidden")))
@interface MMFavoritesAlbumImageCell : MMFavoritesDetailBaseCell <MMFavoriteImageServiceExt>
{
    MMImageView *_imageView;
}

@property(retain, nonatomic) MMImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)MMFavoriteImageServiceDidDownloadImage:(id)arg1 withLocalID:(unsigned int)arg2;
- (void)layoutFavContentView;
- (void)willBeRecycled;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

