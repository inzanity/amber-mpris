/*
 * Copyright (C) 2015-2021 Jolla Ltd.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * This file was initially generated by qdbusxml2cpp version 0.8
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 */

#include "mprisplayeradaptor_p.h"
#include "mprisplayer.h"
#include "mprisplayer_p.h"
#include "mprismetadata_p.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

using namespace Amber;

/*
 * Implementation of adaptor class MprisPlayerAdaptor
 */

MprisPlayerAdaptor::MprisPlayerAdaptor(MprisPlayerPrivate *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MprisPlayerAdaptor::~MprisPlayerAdaptor()
{
    // destructor
}

MprisPlayerPrivate *MprisPlayerAdaptor::parent() const {
    { return static_cast<MprisPlayerPrivate *>(QObject::parent()); }
}

bool MprisPlayerAdaptor::canControl() const
{
    // get the value of property CanControl
    return static_cast<MprisPlayer *>(parent()->parent())->canControl();
}

bool MprisPlayerAdaptor::canGoNext() const
{
    // get the value of property CanGoNext
    return static_cast<MprisPlayer *>(parent()->parent())->canGoNext();
}

bool MprisPlayerAdaptor::canGoPrevious() const
{
    // get the value of property CanGoPrevious
    return static_cast<MprisPlayer *>(parent()->parent())->canGoPrevious();
}

bool MprisPlayerAdaptor::canPause() const
{
    // get the value of property CanPause
    return static_cast<MprisPlayer *>(parent()->parent())->canPause();
}

bool MprisPlayerAdaptor::canPlay() const
{
    // get the value of property CanPlay
    return static_cast<MprisPlayer *>(parent()->parent())->canPlay();
}

bool MprisPlayerAdaptor::canSeek() const
{
    // get the value of property CanSeek
    return static_cast<MprisPlayer *>(parent()->parent())->canSeek();
}

QString MprisPlayerAdaptor::loopStatus() const
{
    // get the value of property LoopStatus
    return parent()->loopStatus();
}

void MprisPlayerAdaptor::setLoopStatus(const QString &value)
{
    // set the value of property LoopStatus
    parent()->setLoopStatus(value);
}

double MprisPlayerAdaptor::maximumRate() const
{
    // get the value of property MaximumRate
    return static_cast<MprisPlayer *>(parent()->parent())->maximumRate();
}

QVariantMap MprisPlayerAdaptor::metadata() const
{
    return parent()->metaData();
}

double MprisPlayerAdaptor::minimumRate() const
{
    // get the value of property MinimumRate
    return qvariant_cast< double >(parent()->property("MinimumRate"));
}

QString MprisPlayerAdaptor::playbackStatus() const
{
    // get the value of property PlaybackStatus
    return parent()->playbackStatus();
}

qlonglong MprisPlayerAdaptor::position() const
{
    // get the value of property Position
    return parent()->position();
}

double MprisPlayerAdaptor::rate() const
{
    // get the value of property Rate
    return static_cast<MprisPlayer *>(parent()->parent())->rate();
}

void MprisPlayerAdaptor::setRate(double value)
{
    parent()->setRate(value);
}

bool MprisPlayerAdaptor::shuffle() const
{
    // get the value of property Shuffle
    return static_cast<MprisPlayer *>(parent()->parent())->shuffle();
}

void MprisPlayerAdaptor::setShuffle(bool value)
{
    parent()->setShuffle(value);
}

double MprisPlayerAdaptor::volume() const
{
    // get the value of property Volume
    return static_cast<MprisPlayer *>(parent()->parent())->volume();
}

void MprisPlayerAdaptor::setVolume(double value)
{
    parent()->setVolume(value);
}

void MprisPlayerAdaptor::Next()
{
    // handle method call org.mpris.MediaPlayer2.Player.Next
    parent()->Next();
}

void MprisPlayerAdaptor::OpenUri(const QString &Uri)
{
    parent()->OpenUri(Uri);
}

void MprisPlayerAdaptor::Pause()
{
    // handle method call org.mpris.MediaPlayer2.Player.Pause
    parent()->Pause();
}

void MprisPlayerAdaptor::Play()
{
    // handle method call org.mpris.MediaPlayer2.Player.Play
    parent()->Play();
}

void MprisPlayerAdaptor::PlayPause()
{
    // handle method call org.mpris.MediaPlayer2.Player.PlayPause
    parent()->PlayPause();
}

void MprisPlayerAdaptor::Previous()
{
    // handle method call org.mpris.MediaPlayer2.Player.Previous
    parent()->Previous();
}

void MprisPlayerAdaptor::Seek(qlonglong Offset)
{
    // handle method call org.mpris.MediaPlayer2.Player.Seek
    parent()->Seek(Offset);
}

void MprisPlayerAdaptor::SetPosition(const QDBusObjectPath &TrackId, qlonglong Position)
{
    // handle method call org.mpris.MediaPlayer2.Player.SetPosition
    parent()->SetPosition(TrackId, Position);
}

void MprisPlayerAdaptor::Stop()
{
    // handle method call org.mpris.MediaPlayer2.Player.priv->stop
    parent()->Stop();
}

